#ifndef UE4SS_SDK_MAG_Flamethrower_BottleTP_HPP
#define UE4SS_SDK_MAG_Flamethrower_BottleTP_HPP

class AMAG_Flamethrower_BottleTP_C : public AMagazine
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UFirstPersonStaticMeshComponent* FirstPersonStaticMesh;
    class UCapsuleComponent* Capsule;
    class USceneComponent* Scene;

    bool OnSpawnRelease_Attached(class AActor* Parent);
    bool OnSpawnRelease_Released();
    void DoRelease();
    void OnItemSkinned(class USkinEffect* Skin);
    void ExecuteUbergraph_MAG_Flamethrower_BottleTP(int32 EntryPoint);
};

#endif
