#ifndef UE4SS_SDK_TOOLTIP_ServerEntry_Mods_HPP
#define UE4SS_SDK_TOOLTIP_ServerEntry_Mods_HPP

class UTOOLTIP_ServerEntry_Mods_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UImage* BiomeImage;
    class UTextBlock* BiomeName;
    class UVerticalBox* ContentBox;
    class UVerticalBox* ModsBox;
    class UVerticalBox* ModsInstalledBox;
    class UVerticalBox* ModsPendingBox;
    class UImage* PlanetZoneImage;
    class URichTextSizable* ShowProfileText;
    FSlateFontInfo ResourceFont;
    class UBiome* Biome;
    class UGeneratedMission* mission;
    TArray<FString> ModNames;
    FSlateFontInfo ModNameFont;

    void SplitByInstalled(TArray<FString>& InNames, TArray<FString>& OutPending, TArray<FString>& OutInstalled);
    void SetModNames(class UVerticalBox*& InBox, TArray<FString>& InNames, bool InInstalled);
    void SetData(TArray<FString>& InModNames, class UGeneratedMission* InMission);
    void PreConstruct(bool IsDesignTime);
    void Destruct();
    void ExecuteUbergraph_TOOLTIP_ServerEntry_Mods(int32 EntryPoint);
};

#endif
