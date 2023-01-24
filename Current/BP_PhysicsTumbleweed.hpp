#ifndef UE4SS_SDK_BP_PhysicsTumbleweed_HPP
#define UE4SS_SDK_BP_PhysicsTumbleweed_HPP

class ABP_PhysicsTumbleweed_C : public ABP_Phys_KickableObject_Base_C
{
    class USimpleObjectInfoComponent* SimpleObjectInfo;
    class UStaticMeshComponent* TumbleWeedModel;
    TArray<class UStaticMesh*> StatichMeshOptions;

    void UserConstructionScript();
};

#endif
