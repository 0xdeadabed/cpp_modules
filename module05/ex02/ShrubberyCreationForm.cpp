/**
 * @author      : hypn0x (wubbalubba@dubdub)
 * @file        : ShrubberyCreationForm
 * @created     : Friday Mar 11, 2022 11:52:26 CET
 */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: Form("shrubbery creation", "none", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target)
	: Form("shrubbery creation", target, 145, 137) {
	std::cout << "Shrubbery Creation Form created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other)
	: Form(other.getName(), other.getTarget(), other.getSignedGrade(), other.getExecuteGrade()) {
	*this = other;
	std::cout << "Copy of Shrubbery Creation Form created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Shrubbery Creation Form destroyed" << std::endl;
}

void ShrubberyCreationForm::executeAction() const {
	std::ofstream out;

	out.open((this->getTarget() + "_shrubbery").c_str(), std::ofstream::in | std::ofstream::trunc);

	out << std::endl;
	out<< "              _{\\ _{\\{\\/}/}/}__\n"
				 "             {/{/\\}{/{/\\}(\\}{/\\} _\n"
				 "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _\n"
				 "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}\n"
				 "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}\n"
				 "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}\n"
				 "      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}\n"
				 "      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}\n"
				 "     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}\n"
				 "      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}\n"
				 "       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)\n"
				 "      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}\n"
				 "       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}\n"
				 "         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}\n"
				 "          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)\n"
				 "            {/{/{\\{\\/}{/{\\{\\{\\(_)/}\n"
				 "             {/{\\{\\{\\/}/}{\\{\\\\}/}\n"
				 "              {){/ {\\/}{\\/} \\}\\}\n"
				 "              (_)  \\.-'.-/\n"
				 "          __...--- |'-.-'| --...__\n"
				 "   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__\n"
				 " -\"    ' .  . '    |.'-._| '  . .  '   jro\n"
				 " .  '-  '    .--'  | '-.'|    .  '  . '\n"
				 "          ' ..     |'-_.-|\n"
				 "  .  '  .       _.-|-._ -|-._  .  '  .\n"
				 "              .'   |'- .-|   '.\n"
				 "  ..-'   ' .  '.   `-._.-�   .'  '  - .\n"
				 "   .-' '        '-._______.-'     '  .\n"
				 "        .      ~,\n"
				 "    .       .   |\\   .    ' '-.\n"
				 "    ___________/  \\____________\n"
				 "   /  Why is it, when you want \\\n"
				 "  |  something, it is so damn   |\n"
				 "  |    much work to get it?     |\n"
				 "   \\___________________________/"	<< std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
	std::cout << "Shrubbery Creation Form assignment operator" << std::endl;
	if (this == &other) return *this;
	return *this;
}
