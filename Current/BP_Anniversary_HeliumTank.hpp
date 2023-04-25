#ifndef UE4SS_SDK_BP_Anniversary_HeliumTank_HPP
#define UE4SS_SDK_BP_Anniversary_HeliumTank_HPP

class ABP_Anniversary_HeliumTank_C : public AHeliumTank
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNiagaraComponent* NS_Anniversary_HeliumSmoke_Const;
    class UInstantUsable* InstantUsable;
    class USphereComponent* Sphere;
    class UStaticMeshComponent* FrontPlane;
    class UStaticMeshComponent* SM_Screen_005;
    class UStaticMeshComponent* SM_GasCanister;
    class USceneComponent* DefaultSceneRoot;

    void BndEvt__BP_HeliumTank_InstantUsable_K2Node_ComponentBoundEvent_1_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void All_PlayParticleFX();
    void ExecuteUbergraph_BP_Anniversary_HeliumTank(int32 EntryPoint);
};

#endif
