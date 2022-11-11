#ifndef UE4SS_SDK_MAG_Flamethrower_Bottle_HPP
#define UE4SS_SDK_MAG_Flamethrower_Bottle_HPP

class AMAG_Flamethrower_Bottle_C : public AMagazine
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UCapsuleComponent* Capsule;
    class USceneComponent* Scene;

    bool OnSpawnRelease_Attached(class AActor* Parent);
    bool OnSpawnRelease_Released();
    void DoRelease();
    void OnItemSkinned(class USkinEffect* Skin);
    void ExecuteUbergraph_MAG_Flamethrower_Bottle(int32 EntryPoint);
};

#endif
