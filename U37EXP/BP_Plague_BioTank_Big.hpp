#ifndef UE4SS_SDK_BP_Plague_BioTank_Big_HPP
#define UE4SS_SDK_BP_Plague_BioTank_Big_HPP

class ABP_Plague_BioTank_Big_C : public ADisplayCase
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetComponent* Widget_Bars2;
    class UNiagaraComponent* NS_Biotank_BubbleReact;
    class UPointLightComponent* PointLight;
    class USpotLightComponent* SpotLight1;
    class USpotLightComponent* SpotLight;
    class UInstantUsable* InstantUsable;
    class UCapsuleComponent* Capsule;
    class UFSDAudioComponent* Idle;
    class UWidgetComponent* DisplayName2;
    class UPointLightComponent* BlueLight;
    class UNiagaraComponent* NS_Biotank_Bubbles;
    class UStaticMeshComponent* SM_Plague_Biotank_01;

    void ReceiveBeginPlay();
    void BndEvt__BP_Plague_BioTank_Big_InstantUsable_K2Node_ComponentBoundEvent_0_UsedBySignature__DelegateSignature(class APlayerCharacter* User, EInputKeys Key);
    void ExecuteUbergraph_BP_Plague_BioTank_Big(int32 EntryPoint);
};

#endif
