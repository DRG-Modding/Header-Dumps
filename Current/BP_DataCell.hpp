#ifndef UE4SS_SDK_BP_DataCell_HPP
#define UE4SS_SDK_BP_DataCell_HPP

class ABP_DataCell_C : public ABP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOutlineComponent* outline;
    class UNiagaraComponent* Niagara;
    class UPointLightComponent* PointLightLarge;
    class UAudioComponent* Idle_Cue;
    class UPointLightComponent* PointLight;
    bool PickedUp;

    void Receive_OnDeposited(class APlayerCharacter* fromPlayer, class AActor* toActor);
    void UpdateAttachState(bool Attached);
    void BndEvt__BP_DataCell_Carriable_K2Node_ComponentBoundEvent_1_CarriableEvent__DelegateSignature();
    void BndEvt__BP_DataCell_Carriable_K2Node_ComponentBoundEvent_2_CarriableEvent__DelegateSignature();
    void ExecuteUbergraph_BP_DataCell(int32 EntryPoint);
};

#endif
