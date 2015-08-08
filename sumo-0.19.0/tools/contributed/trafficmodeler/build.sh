#!/bin/bash
JAVAC=/usr/lib/jvm/java-1.6.0-openjdk-1.6.0.0.x86_64/bin/javac
DEST=bin
$JAVAC src/Main.java -sourcepath src -cp lib/colt.jar -d $DEST
rm -rf $DEST/resources
rm -rf $DEST/lib
svn export src/resources $DEST/resources
svn export lib/ $DEST/lib
cd bin
jar cfm ../jar/SUMOTrafficModeler.jar ../MANIFEST.MF .
