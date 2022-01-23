#ifndef UE4SS_SDK_MAG_Flamethrower_Bottle_HPP
#define UE4SS_SDK_MAG_Flamethrower_Bottle_HPP

class AMAG_Flamethrower_Bottle_C : public AMagazine
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UCapsuleComponent* Capsule;
    class USceneComponent* Scene;

    bool Attached(class AActor* Parentclass AAmmoDrivenWeapon* K2Node_DynamicCast_AsAmmo_Driven_Weapon, bool K2Node_DynamicCast_bSuccess);
    bool Released();
    void DoRelease();
    void OnItemSkinned(class USkinEffect* Skin);
    void ExecuteUbergraph_MAG_Flamethrower_Bottle(int32 EntryPoint, class USkinEffect* K2Node_Event_skin);
};

#endif
