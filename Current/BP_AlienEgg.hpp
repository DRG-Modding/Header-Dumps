#ifndef UE4SS_SDK_BP_AlienEgg_HPP
#define UE4SS_SDK_BP_AlienEgg_HPP

class ABP_AlienEgg_C : public ABP_Gem_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UStaticMeshComponent* SurroundingTerrainCarver;
    class UOutlineComponent* outline;
    class UPointLightComponent* PointLight6;
    class UPointLightComponent* PointLight5;
    class UPointLightComponent* PointLight4;
    class UPointLightComponent* PointLight3;
    class UPointLightComponent* PointLight2;
    class UPointLightComponent* PointLight1;
    class UPointLightComponent* light_center;
    float Timeline_0_NewTrack_0_824C546F43F8F98270303087668A3695;
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_824C546F43F8F98270303087668A3695;
    class UTimelineComponent* Timeline_0;
    float LightIntensity;
    FLinearColor LightColor;
    bool IsSpecialEgg;
    class UMaterialInstance* GreatEggHuntMaterial;
    TArray<class UMaterialInstance*> GreatEggHuntMaterials;

    void OnRep_GreatEggHuntMaterial();
    void ModulateLights(float NewIntensity);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void All_PlayDugFree();
    void SetSpecialEgg();
    void ExecuteUbergraph_BP_AlienEgg(int32 EntryPoint);
};

#endif
