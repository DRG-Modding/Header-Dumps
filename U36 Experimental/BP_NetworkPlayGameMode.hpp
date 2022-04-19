#ifndef UE4SS_SDK_BP_NetworkPlayGameMode_HPP
#define UE4SS_SDK_BP_NetworkPlayGameMode_HPP

class ABP_NetworkPlayGameMode_C : public ABP_GameMode_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    UClass* GetDefaultPawnClassForController(class AController* InController);
    void RecieveAllDwarvesDown();
    void ExecuteUbergraph_BP_NetworkPlayGameMode(int32 EntryPoint);
};

#endif
