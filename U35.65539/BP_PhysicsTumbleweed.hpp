#ifndef UE4SS_SDK_BP_PhysicsTumbleweed_HPP
#define UE4SS_SDK_BP_PhysicsTumbleweed_HPP

class ABP_PhysicsTumbleweed_C : UBP_Phys_KickableObject_Base_C
{
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UStaticMeshComponent* TumbleWeedModel;
    TArray<UStaticMesh*> StatichMeshOptions;

    void UserConstructionScript(UStaticMesh* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue);
}

#endif
