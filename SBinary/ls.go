package main

import (
	"os"
)

var wd string
var err error

func main() {
	wd, err = os.Getwd()
	if err != nil {
		panic(err)
	}

	files, err := os.ReadDir(wd)
	if err != nil {
		panic(err)
	}

	for i := 0; i < len(files); i++ {
		if files[i].IsDir() {
			print(files[i].Name(), "/\n")
		} else {
			println(files[i].Name())
		}
	}
}
