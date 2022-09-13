#ifndef UE4SS_SDK_WPN_DetPack_Detonator_HPP
#define UE4SS_SDK_WPN_DetPack_Detonator_HPP

class AWPN_DetPack_Detonator_C : public ADetPackItem
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UMaterialInstanceDynamic* StatusMaterial;

    void GetGearStatEntry(class AFSDPlayerState* PlayerState, TArray<FGearStatEntry>& Stats);
    void UserConstructionScript();
    void RecieveStartUsing();
    void RecieveEquipped();
    void ReceiveResupply(float percentage);
    void Receive_OnRep_IsDetonatorOut();
    void ExecuteUbergraph_WPN_DetPack_Detonator(int32 EntryPoint);
};

#endif
