// -*- mode: C++; c-indent-level: 4; c-basic-offset: 4;  tab-width: 8; -*-
//
// Simple test that did trigger the bug reported by Miguel Lechón
//
// Copyright (C) 2009 Dirk Eddelbuettel and GPL'ed 

#include <RInside.h>                    // for the embedded R via RInside

int main(int argc, char *argv[]) {

    RInside R(argc, argv);              // create an embedded R instance 
    
    std::string txt = "Hello, world!\n";// assign a standard C++ string to 'txt'
    R.assign( txt, "txt");              // assign string var to R variable 'txt'

    std::string evalstr = "txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; txt <- \"foo\\n\"; cat(txt)"; 
    for (int i=0; i<1e1; i++) {
        R.parseEvalQ(evalstr);          // eval the init string, ignoring any returns
    }
    exit(0);
}

