#ifndef UE4SS_SDK_BP_Azure_MagicCrystal_A_HPP
#define UE4SS_SDK_BP_Azure_MagicCrystal_A_HPP

class ABP_Azure_MagicCrystal_A_C : ABP_Azure_MagicCrystal_Base_C
{
    USphereComponent* Sphere;
    UStatusEffectTriggerComponent* StatusEffectTrigger;
    UAudioComponent* Idle Sound;
    UStaticMeshComponent* SM_Carver_DropPodDrill001;
    ULevelGenerationCarverComponent* LevelGenerationCarver_Floor;
    UParticleSystemComponent* P_Biome_Azure_MagicCrystal_Sparks;
}

#endif
