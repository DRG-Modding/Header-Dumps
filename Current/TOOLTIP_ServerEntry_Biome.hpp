#ifndef UE4SS_SDK_TOOLTIP_ServerEntry_Biome_HPP
#define UE4SS_SDK_TOOLTIP_ServerEntry_Biome_HPP

class UTOOLTIP_ServerEntry_Biome_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    class UImage* BiomeImage;
    class UTextBlock* BiomeName;
    class UVerticalBox* ContentBox;
    class UImage* PlanetZoneImage;
    class URichTextSizable* ShowProfileText;
    FSlateFontInfo ResourceFont;
    class UBiome* Biome;

    void SetData(class UBiome* InBiome);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_TOOLTIP_ServerEntry_Biome(int32 EntryPoint);
};

#endif
