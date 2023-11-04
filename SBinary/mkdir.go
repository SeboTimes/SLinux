package main

import "os"

func main() {
	os.Mkdir(os.Args[1], os.ModeDir)
}
