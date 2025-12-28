#include "main.h"

DWORD WINAPI MainThread(LPVOID lpParam) {

	while (!(GetAsyncKeyState(VK_END) & 0x8000)) { Sleep(100); }

	FreeLibraryAndExitThread((HMODULE)lpParam, 0);

	return 0;
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpParam) {

	if (ul_reason_for_call == DLL_PROCESS_ATTACH) {

		DisableThreadLibraryCalls(hModule);

		HANDLE hThread = CreateThread(nullptr, 0, MainThread, hModule, 0, nullptr);

		if (hThread) { CloseHandle(hThread); }
	}
	return TRUE;
}