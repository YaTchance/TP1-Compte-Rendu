{ pkgs }: {
	deps = [
		pkgs.haskellPackages.concurrent-dns-cache
  pkgs.clang_12
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}