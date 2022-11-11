#ifndef UE4SS_SDK_WPN_ShieldRegeneratorItem_HPP
#define UE4SS_SDK_WPN_ShieldRegeneratorItem_HPP

class AWPN_ShieldRegeneratorItem_C : public AShieldGeneratorItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UAudioComponent* RechargeAudio;
    class UMaterialInterface* RechargedMaterial;

    void UpdateMaterial();
    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void RecieveStartUsing();
    void ReceiveItemThrown(class AThrowableActor* thrownActor);
    void ReceiveGeneratorRecharged();
    void ReceiveGeneratorRechargeProgress(float Progress);
    void BndEvt__CarryCapacity_K2Node_ComponentBoundEvent_0_AmountChangedSignature__DelegateSignature(int32 Amount);
    void BndEvt__ChargeCapacity_K2Node_ComponentBoundEvent_1_AmountChangedSignature__DelegateSignature(int32 Amount);
    void ReceiveGeneratorReturned();
    void ExecuteUbergraph_WPN_ShieldRegeneratorItem(int32 EntryPoint);
};

#endif
