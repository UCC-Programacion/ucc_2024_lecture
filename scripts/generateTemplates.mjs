import { writeFile, mkdir } from "fs/promises";
import path from "path";

const getEjIds = () =>
  [16, 12, 11, 5, 4].flatMap((ejs, u) =>
    [...Array(ejs).keys()].map(
      (_, ej) => `u${u + 1}e${("" + (ej + 1)).padStart(2, 0)}`
    )
  );

const ejIds = getEjIds();

ejIds.forEach(async (ejId) => {
  const ejDir = path.join("ejs", ejId);
  const mainCppPath = path.join(ejDir, "main.cpp");
  const cmakeListsPath = path.join(ejDir, "CMakeLists.txt");
  const cmakeLists = `add_executable(${ejId} main.cpp)
`;
  const mainCpp = `#include <iostream>

int main()
{
  std::cout << "${ejId}" << std::endl;
}
`;

  await mkdir(ejDir, { recursive: true });
  writeFile(cmakeListsPath, cmakeLists);
  writeFile(mainCppPath, mainCpp);
});

const cmakeLists = ejIds.map((ejId) => `add_subdirectory(${ejId})`).join("\n");
const cmakeListsPath = path.join("ejs", "CMakeLists.txt");
writeFile(cmakeListsPath, cmakeLists);
