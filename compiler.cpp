/*
 *     ezAMI: IBIS-AMI model generation tool
 *    Copyright (C) 2020
 *   Author: Xinying Wang (xinying@illinois.edu)
 *           Department of Electrical Computer Engineering
 *           University of Illinois at Urbana-Champaign
 *

 *   This program is free software: you can redistribute it and/or modify
 *   it under the terms of the GNU General Public License as published by
 *   the Free Software Foundation, either version 3 of the License, or
 *   (at your option) any later version.

 *   This program is distributed in the hope that it will be useful,
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *   GNU General Public License for more details.

 *   You should have received a copy of the GNU General Public License
 *   along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "compiler.h"
#include <QFileDialog>



compiler::compiler(QWidget *parent) : QDialog(parent),ui(new Ui::Compiler_Dialog)
{
    ui->setupUi(this);
    process = new QProcess();
}
compiler::~compiler()
{
    delete process;
}

QString compiler::getSourcePath()
{
    return projectDirectory;
}

void compiler::compile()
{
    /*
    QString program = "gcc";
    QStringList gccargu1, gccargu2, linkargu;
    gccargu1<<"-c"<<"-o"<<"/Research/ezAMI/AMI/ami.o"<<"F:/Research/ezAMI/AMI/ami.cpp"<<"-D"<<"ADD_EXPORTS";
    gccargu2<<"-c"<<"-o"<<"/Research/ezAMI/AMI/AMI_container.o"<<"F:/Research/ezAMI/AMI/AMI_container.cpp" <<"-D"<<"ADD_EXPORTS";
    linkargu<<"-o"<<"F:/Research/ezAMI/AMI/ami.dll"<<"-s"<<"-shared"<<"F:/Research/ezAMI/AMI/ami.o"<<"/Research/ezAMI/AMI/AMI_container.o"<<"-Wl,--subsystem,windows";
    //QProcess::execute("gcc -c -o F:/Research/C++/exampe.o F:/Research/C++/example.cpp -D ADD_EXPORTS");
    process->start(program,gccargu1);
    if(process->waitForFinished()){
        if(process->exitCode() == 0){
            ui->textBrowser->append(process->readAllStandardOutput());
            process->start(program,gccargu2);
            if(process->waitForFinished()){
                if(process->exitCode()==0)
                {
                    ui->textBrowser->append(process->readAllStandardOutput());
                    ui->textBrowser->append("Compile done!");
                }
                else
                {
                    ui->textBrowser->append(process->readAllStandardOutput());
                    ui->textBrowser->append(process->readAllStandardError());
                    return;

                }
            }
        }

        else
        {

            ui->textBrowser->append(process->readAllStandardError());
            return;
        }


    }
    process->start(program,linkargu);
    if(process->waitForFinished()){
        if(process->exitCode()==0)
        {
            ui->textBrowser->append(process->readAllStandardOutput());
            ui->textBrowser->append("Link finish!");
        }
        else
        {
            ui->textBrowser->append(process->readAllStandardOutput());
            ui->textBrowser->append(process->readAllStandardError());
            ui->textBrowser->append("something wrong");
            return;

        }
    }
    */

    QString cl = "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/bin/HostX86/x64/cl.exe";
    QString link = "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/bin/HostX86/x64/LINK.exe";
    QString INC_VS = tr("C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include");
    QString INC_SDK_SH = tr("C:/Program Files (x86)/Windows Kits/10/Include/10.0.18362.0/shared");
    QString INC_SDK_UM = tr("C:/Program Files (x86)/Windows Kits/10/Include/10.0.18362.0/um");
    QString INC_SDK_UCRT = tr("C:/Program Files (x86)/Windows Kits/10/Include/10.0.18362.0/ucrt");
    QString INC_USR = tr("F:/Research/ezAMI/AMI");

}

void compiler::generateDll()
{
    QString cl = "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/bin/HostX86/x64/cl.exe";
    QString link = "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/bin/HostX86/x64/LINK.exe";

    QString INC_VS = tr("C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/include");
    QString INC_SDK_SH = "C:/Program Files (x86)/Windows Kits/10/Include/10.0.18362.0/shared";
    QString INC_SDK_UM = "C:/Program Files (x86)/Windows Kits/10/Include/10.0.18362.0/um";
    QString INC_SDK_UCRT = "C:/Program Files (x86)/Windows Kits/10/Include/10.0.18362.0/ucrt";
    QString INC_USR = projectDirectory;


    QString LIB_VS = "C:/Program Files (x86)/Microsoft Visual Studio/2019/Community/VC/Tools/MSVC/14.25.28610/lib/x64";
    QString LIB_SDK = "C:/Program Files (x86)/Windows Kits/10/Lib/10.0.18362.0/um/x64";
    QString LIB_SDK_UCRT = "C:/Program Files (x86)/Windows Kits/10/Lib/10.0.18362.0/ucrt/x64";

    QStringList clargu;

    clargu<<"/c"<<"/I"<<INC_USR<<"/I"<<INC_VS<<"/I"<<INC_SDK_SH<<"/I"<<INC_SDK_UM<<"/I"<<INC_SDK_UCRT;
    clargu<<"/D"<<"NDEBUG"<<"/D"<<"AMIDLL_EXPORTS"<<"/D"<<"_WINDOWS"<<"/D"<<"_USRDLL"<<"/D"<<"_WINDLL"<<"/D"<<"_UNICODE";
    clargu<<"/Gm-"<<"/EHsc"<<"/MD"<<"/GS"<<"/Gy"<<"/fp:precise"<<"/permissive-"<<"/Zc:wchar_t"<<"/Zc:forScope"<<"/Zc:inline";
    clargu<<"/Fo"+INC_USR+"/x64/Release/"<<"/Gd"<<"/TP"<<"/FC"<<"/errorReport:prompt";
    clargu += sourceFiles;

    QStringList linkargu;

    linkargu<<"/OUT:"+AMIDirectory +"ami_windows_x64.dll";
    linkargu += objFiles;
    linkargu<<"/LIBPATH:"+LIB_VS<<"/LIBPATH:"+LIB_SDK<<"/LIBPATH:"+LIB_SDK_UCRT;
    linkargu<<"/DYNAMICBASE"<<"kernel32.lib"<<"user32.lib"<<"gdi32.lib"<<"winspool.lib"<<"comdlg32.lib"<<"advapi32.lib";
    linkargu<<"shell32.lib"<<"ole32.lib"<<"oleaut32.lib"<<"uuid.lib"<<"odbc32.lib"<<"odbccp32.lib"<<"/IMPLIB:"+INC_USR + "/x64/Release/ami.lib";
    linkargu<<"/DLL"<<"/MACHINE:X64"<<"/OPT:REF"<<"/INCREMENTAL:NO"<<"/SUBSYSTEM:WINDOWS"<<"/OPT:ICF"<<"/NXCOMPAT"<<"/ERRORREPORT:PROMPT";
    linkargu<<"/NOLOGO"<<"/TLBID:1";

    process->start(cl,clargu);
    if(process->waitForFinished()){
        if(process->exitCode()==0){
            ui->textBrowser->append(process->readAllStandardError());
            ui->textBrowser->append(process->readAllStandardOutput());
        }
        else{
            ui->textBrowser->append(process->readAllStandardError());
            ui->textBrowser->append(process->readAllStandardOutput());
        }
    }
    process->start(link,linkargu);
    if(process->waitForFinished()){
        if(process->exitCode()==0){
            ui->textBrowser->append(process->readAllStandardError());
            ui->textBrowser->append(process->readAllStandardOutput());
        }
        else{
            ui->textBrowser->append(process->readAllStandardError());
            ui->textBrowser->append(process->readAllStandardOutput());
        }
    }
}

void compiler::on_gccPathToolButton_clicked()
{
   cppComplier = QFileDialog::getOpenFileName(this, tr("Select compiler"), "C:",
            tr(".exe (*.exe)"));
    ui->gccPathLineEdit->setText(cppComplier);
}



void compiler::on_generalGccCheckBox_clicked(bool checked)
{
    if(checked == true)
        cppComplier = "gcc";
    else {
        cppComplier = ui->gccPathLineEdit->text();
    }
}

void compiler::on_buildPushButton_clicked()
{

    compile();

}

void compiler::on_closePushButton_clicked()
{
    this->close();
}

void compiler::on_AMIPushButton_clicked()
{
    generateDll();
}

void compiler::updateProjectArch( projectTreeModel *arch)
{
    projectArch = arch;
    QModelIndex rootIndex = projectArch? projectArch->getProjectRoot(): QModelIndex();
    projectTreeItem *projectRootItem = rootIndex.isValid()? static_cast<projectTreeItem*>(rootIndex.internalPointer()) : nullptr;
    if (projectRootItem)
    {
        QString projectPath = projectRootItem->child(0)->data(1).toString();
        QDir dir = QFileInfo(projectPath).absoluteDir();
        projectDirectory = dir.absolutePath()+ "/";
        AMIDirectory = projectDirectory + "x64/Release/";
        projectTreeItem *sourceCode = projectRootItem->child(1);

        for(auto i = 0; i < sourceCode->childCount(); i++)
        {
            QString sourceFile = sourceCode->child(i)->data(1).toString();
            QString fileName = sourceCode->child(i)->data(0).toString();
            if (fileName.contains(".cpp"))
            {
                sourceFiles<<sourceFile;
                objFiles<<AMIDirectory + fileName.replace(".cpp", ".obj");
            }
        }

    }
}


