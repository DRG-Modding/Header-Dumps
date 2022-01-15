#ifndef UE4SS_SDK_MAG_BaseClass_HPP
#define UE4SS_SDK_MAG_BaseClass_HPP

class AMAG_BaseClass_C : AMagazine
{
    FPointerToUberGraphFrame UberGraphFrame;
    UFirstPersonStaticMeshComponent* Mesh;
    UBoxComponent* Box;
    USceneComponent* DefaultSceneRoot;
    float ChangeFovDelay;
    bool ApplySkin;

    bool Attached(AActor* ParentUAmmoDrivenWeapon* K2Node_DynamicCast_AsAmmo_Driven_Weapon, bool K2Node_DynamicCast_bSuccess);
    bool Released();
    void DoRelease();
    void OnItemSkinned(USkinEffect* Skin);
    void ExecuteUbergraph_MAG_BaseClass(int32 EntryPoint, USkinEffect* K2Node_Event_skin);
}

#endif
