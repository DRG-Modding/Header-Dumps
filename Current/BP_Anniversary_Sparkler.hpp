#ifndef UE4SS_SDK_BP_Anniversary_Sparkler_HPP
#define UE4SS_SDK_BP_Anniversary_Sparkler_HPP

class ABP_Anniversary_Sparkler_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SM_Anniversary_Sparkler_Outer;
    class UFSDAudioComponent* FSDAudio;
    class USphereComponent* Usable;
    class UStaticMeshComponent* SM_Anniversary_Sparkler;
    class USceneComponent* StopPoint;
    class UInstantUsable* InstantUsable;
    class UNiagaraComponent* NS_Lunar_Sparks;
    float BurnSpeed;
    float CurrentDistance;
    float InitialDistance;

    void OnRep_Burning();
    void BndEvt__BP_Anniversary_Sparkler_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ReceiveTick(float DeltaSeconds);
    void OnKnock(class APlayerCharacter* Player);
    void All_BindGenericDelegate(class APlayerCharacter* Player);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Anniversary_Sparkler(int32 EntryPoint);
};

#endif
