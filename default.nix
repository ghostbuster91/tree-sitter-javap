let
  nixpkgs = fetchTarball {
    name = "nixpkgs";
    url = "https://github.com/NixOS/nixpkgs/archive/refs/tags/23.05.tar.gz";
    sha256 = "10wn0l08j9lgqcw8177nh2ljrnxdrpri7bp0g7nvrsn9rkawvlbf";
  };
  pkgs = import nixpkgs { };
in
pkgs.mkShell {
  name = "env";
  buildInputs = with pkgs; [
    nodejs
    tree-sitter
  ];
}
