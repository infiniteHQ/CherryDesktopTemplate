#include "../lib/cherry/cherry.hpp"

void Render() { CherryKit::TitleOne("Hello World"); }

CherryApplication *Cherry::CreateApplication(int argc, char **argv) {
  Cherry::ApplicationSpecification config;

  // We will start by defining the main render function of our application.
  config.SetMainRenderCallback(Render);

  // Then, we will define the window size of our application.
  config.SetDefaultHeight(900);
  config.SetDefaultWidth(900);

  return new CherryApplication(config);
}

int main(int argc, char *argv[]) {
  CherryRun(argc, argv);
  return 0;
}
