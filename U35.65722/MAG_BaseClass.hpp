#ifndef UE4SS_SDK_MAG_BaseClass_HPP
#define UE4SS_SDK_MAG_BaseClass_HPP

class AMAG_BaseClass_C : public AMagazine
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonStaticMeshComponent* Mesh;
    class UBoxComponent* Box;
    class USceneComponent* DefaultSceneRoot;
    float ChangeFovDelay;
    bool ApplySkin;

    bool Attached(class AActor* Parentclass AAmmoDrivenWeapon* K2Node_DynamicCast_AsAmmo_Driven_Weapon, bool K2Node_DynamicCast_bSuccess);
    bool Released();
    void DoRelease();
    void OnItemSkinned(class USkinEffect* Skin);
    void ExecuteUbergraph_MAG_BaseClass(int32 EntryPoint, class USkinEffect* K2Node_Event_skin);
};

#endif
