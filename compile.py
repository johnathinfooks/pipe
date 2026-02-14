import sys
sys.dont_write_bytecode = True
from pathlib import Path
import subprocess
import shutil

############################################################
# linux only for now
proj_name = "Pipe"
bin_name = "f"
src_path = "./src/"
build_path = "./build/"
############################################################

def getCFiles() -> list[str]:
    return [str(p) for p in Path(src_path).glob("*.cpp")]

def compileAll():
    print("\n\t===== {} =====".format(proj_name))
    print("\tCompiling...\n")
    build_dir = Path(build_path)
    cf = getCFiles()

    if build_dir.exists():
        shutil.rmtree(build_dir)

    build_dir.mkdir(parents=True, exist_ok=True)

    out = str(build_dir / bin_name)
    subprocess.run(["gcc", *cf, "-o", out], check=True)
    print("\tSource files:\n")
    for n in cf:
        print("\t{}".format(n))

    print("\n\tCompilation successful\n")

def test():
    print("tests in progress")

compileAll()

# TODO: change the rm build thing to a subprocess command rather than the weird module that is here
# TODO: add error checking
