#ifndef UE4SS_SDK_Widget_DropPod_BiomeRadar_HPP
#define UE4SS_SDK_Widget_DropPod_BiomeRadar_HPP

class UWidget_DropPod_BiomeRadar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* RadarRotation;
    class UWidgetAnimation* DeepDiveLogo;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon;
    class UBasic_ResourceIcon_C* Basic_ResourceIcon_0;
    class UTextBlock* DATA_PlanetaryRegionName;
    class UVerticalBox* DeepDive;
    class UImage* Gradient;
    class UVerticalBox* NoDeepDive;
    class UImage* RadarOutline;
    class UImage* RadarSweep;
    class UTextBlock* TextBlock_0;
    class UUI_ImageTinted_C* UI_ImageTinted;
    class UUI_MaskedImage_C* UI_MaskedImage;
    class UVerticalBox* VerticalBox_MissionData;
    class UWidgetSwitcher* WidgetSwitcher_1;
    float Depth;
    float Angle;
    class UBiome* Biome;

    void SetGeneratedMission(class UGeneratedMission* In Mission);
    void Construct();
    void OnGeneratedMissionChanged(class UGeneratedMission* OutGeneratedMission);
    void ExecuteUbergraph_Widget_DropPod_BiomeRadar(int32 EntryPoint);
};

#endif
