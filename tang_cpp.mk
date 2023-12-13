##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=tang_cpp
ConfigurationName      :=Release
WorkspacePath          := "C:\Users\franklin\Documents\workspace"
ProjectPath            := "C:\Users\franklin\Documents\workspace\tang_cpp"
IntermediateDirectory  :=./Release
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=franklin
Date                   :=09/16/12
CodeLitePath           :="C:\Program Files (x86)\CodeLite"
LinkerName             :=g++
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="C:\Users\franklin\Documents\workspace\tang_cpp\tang_cpp.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
LinkOptions            := -Mwindows 
IncludePath            := $(IncludeSwitch)/cygdrive/c/usr/include  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                :=$(LibraryPathSwitch)/cygdrive/c/lib  $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := g++
CC       := gcc
CXXFLAGS :=  -O2 -Wall $(Preprocessors)
CFLAGS   :=  -O2 -Wall $(Preprocessors)


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files (x86)\CodeLite
Objects=$(IntermediateDirectory)/main$(ObjectSuffix) $(IntermediateDirectory)/bot$(ObjectSuffix) $(IntermediateDirectory)/connectionHandler$(ObjectSuffix) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects) > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Release"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/main$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/franklin/Documents/workspace/tang_cpp/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main$(ObjectSuffix) -MF$(IntermediateDirectory)/main$(DependSuffix) -MM "C:/Users/franklin/Documents/workspace/tang_cpp/main.cpp"

$(IntermediateDirectory)/main$(PreprocessSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main$(PreprocessSuffix) "C:/Users/franklin/Documents/workspace/tang_cpp/main.cpp"

$(IntermediateDirectory)/bot$(ObjectSuffix): bot.cpp $(IntermediateDirectory)/bot$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/franklin/Documents/workspace/tang_cpp/bot.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/bot$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/bot$(DependSuffix): bot.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/bot$(ObjectSuffix) -MF$(IntermediateDirectory)/bot$(DependSuffix) -MM "C:/Users/franklin/Documents/workspace/tang_cpp/bot.cpp"

$(IntermediateDirectory)/bot$(PreprocessSuffix): bot.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/bot$(PreprocessSuffix) "C:/Users/franklin/Documents/workspace/tang_cpp/bot.cpp"

$(IntermediateDirectory)/connectionHandler$(ObjectSuffix): connectionHandler.cpp $(IntermediateDirectory)/connectionHandler$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/franklin/Documents/workspace/tang_cpp/connectionHandler.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/connectionHandler$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/connectionHandler$(DependSuffix): connectionHandler.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/connectionHandler$(ObjectSuffix) -MF$(IntermediateDirectory)/connectionHandler$(DependSuffix) -MM "C:/Users/franklin/Documents/workspace/tang_cpp/connectionHandler.cpp"

$(IntermediateDirectory)/connectionHandler$(PreprocessSuffix): connectionHandler.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/connectionHandler$(PreprocessSuffix) "C:/Users/franklin/Documents/workspace/tang_cpp/connectionHandler.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/*.*
	$(RM) $(OutputFile)
	$(RM) $(OutputFile).exe
	$(RM) "C:\Users\franklin\Documents\workspace\.build-release\tang_cpp"


