#ifndef UE4SS_SDK_InitSpacerig_HPP
#define UE4SS_SDK_InitSpacerig_HPP

class AInitSpacerig_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USceneComponent* DefaultSceneRoot;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_InitSpacerig(int32 EntryPoint, FTransform CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class ADamageTextMod_C* CallFunc_FinishSpawningActor_ReturnValue);
};

#endif
