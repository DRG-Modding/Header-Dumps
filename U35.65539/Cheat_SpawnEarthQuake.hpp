#ifndef UE4SS_SDK_Cheat_SpawnEarthQuake_HPP
#define UE4SS_SDK_Cheat_SpawnEarthQuake_HPP

class UCheat_SpawnEarthQuake_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UButton* Button_0;
    FSoftClassPath NewVar_0;
    TSoftClassPtr<UObject> NewVar_1;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_SpawnEarthQuake(int32 EntryPoint, FTransform CallFunc_MakeTransform_ReturnValue, TSubclassOf<UObject> CallFunc_LoadClass_ReturnValue, TSubclassOf<AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, AActor* CallFunc_FinishSpawningActor_ReturnValue);
}

#endif
