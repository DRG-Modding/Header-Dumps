#ifndef UE4SS_SDK_GM_Tutorial_New_HPP
#define UE4SS_SDK_GM_Tutorial_New_HPP

class AGM_Tutorial_New_C : public AGM_Mining_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBP_TutorialComponent_C* BP_TutorialComponent;

    UClass* GetDefaultPawnClassForController(class AController* InController);
    void GetEscapepodLocation(FTransform& Location);
    void SpawnBosco(FTransform Location);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_GM_Tutorial_New(int32 EntryPoint);
};

#endif
