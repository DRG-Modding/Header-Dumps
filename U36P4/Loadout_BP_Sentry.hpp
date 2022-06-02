#ifndef UE4SS_SDK_Loadout_BP_Sentry_HPP
#define UE4SS_SDK_Loadout_BP_Sentry_HPP

class ALoadout_BP_Sentry_C : public ALoadoutItemProxy
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USkeletalMeshComponent* SkeletalMesh;
    class USceneComponent* DefaultSceneRoot;

    void RecieveEquipped();
    void RecieveUnequipped();
    void ExecuteUbergraph_Loadout_BP_Sentry(int32 EntryPoint);
};

#endif
