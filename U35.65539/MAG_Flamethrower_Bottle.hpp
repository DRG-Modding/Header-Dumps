#ifndef UE4SS_SDK_MAG_Flamethrower_Bottle_HPP
#define UE4SS_SDK_MAG_Flamethrower_Bottle_HPP

class AMAG_Flamethrower_Bottle_C : AMagazine
{
    FPointerToUberGraphFrame UberGraphFrame;
    UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    UCapsuleComponent* Capsule;
    USceneComponent* Scene;

    bool Attached(AActor* ParentUAmmoDrivenWeapon* K2Node_DynamicCast_AsAmmo_Driven_Weapon, bool K2Node_DynamicCast_bSuccess);
    bool Released();
    void DoRelease();
    void OnItemSkinned(USkinEffect* Skin);
    void ExecuteUbergraph_MAG_Flamethrower_Bottle(int32 EntryPoint, USkinEffect* K2Node_Event_skin);
}

#endif
