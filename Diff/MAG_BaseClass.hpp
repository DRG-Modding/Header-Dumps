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

    bool OnSpawnRelease_Attached(class AActor* Parent);
    bool OnSpawnRelease_Released();
    void DoRelease();
    void OnItemSkinned(class USkinEffect* Skin);
    void ExecuteUbergraph_MAG_BaseClass(int32 EntryPoint);
};

#endif
