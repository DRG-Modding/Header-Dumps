#ifndef UE4SS_SDK_PRJ_Spider_Lobber_Projectile_Fragment_HPP
#define UE4SS_SDK_PRJ_Spider_Lobber_Projectile_Fragment_HPP

class APRJ_Spider_Lobber_Projectile_Fragment_C : public APRJ_Base_Spider_Lobber_Projectile_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USoundBase* ImpactCue;

    void OnInitialized();
    void SpawnEffects(const FVector& Location, const FVector& Normal);
    void ExecuteUbergraph_PRJ_Spider_Lobber_Projectile_Fragment(int32 EntryPoint);
};

#endif
