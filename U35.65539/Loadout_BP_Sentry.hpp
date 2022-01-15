#ifndef UE4SS_SDK_Loadout_BP_Sentry_HPP
#define UE4SS_SDK_Loadout_BP_Sentry_HPP

class ALoadout_BP_Sentry_C : ULoadoutItemProxy
{
    FPointerToUberGraphFrame UberGraphFrame;
    USkeletalMeshComponent* SkeletalMesh;
    USceneComponent* DefaultSceneRoot;

    void RecieveEquipped();
    void RecieveUnequipped();
    void ExecuteUbergraph_Loadout_BP_Sentry(int32 EntryPoint, bool CallFunc_K2_AttachToComponent_ReturnValue);
}

#endif
