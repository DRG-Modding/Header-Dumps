#ifndef UE4SS_SDK_Cheat_SpawnSnowStorm_HPP
#define UE4SS_SDK_Cheat_SpawnSnowStorm_HPP

class UCheat_SpawnSnowStorm_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_0;
    FSoftClassPath NewVar_0;
    TSoftClassPtr<UObject> NewVar_1;

    void Construct();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_Cheat_SpawnSnowStorm(int32 EntryPoint, FTransform CallFunc_MakeTransform_ReturnValue, UClass* CallFunc_LoadClass_ReturnValue, TSubclassOf<class AActor> K2Node_ClassDynamicCast_AsActor, bool K2Node_ClassDynamicCast_bSuccess, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue);
};

#endif
