#ifndef UE4SS_SDK_InitCave_DUPL_2_HPP
#define UE4SS_SDK_InitCave_DUPL_2_HPP

class AInitCave_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_InitCave(int32 EntryPoint, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class AHealthAndShieldNumbers_Mod_C* CallFunc_FinishSpawningActor_ReturnValue);
};

#endif
