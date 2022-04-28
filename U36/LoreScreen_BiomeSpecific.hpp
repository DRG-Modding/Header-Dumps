#ifndef UE4SS_SDK_LoreScreen_BiomeSpecific_HPP
#define UE4SS_SDK_LoreScreen_BiomeSpecific_HPP

class ULoreScreen_BiomeSpecific_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar3;
    class ULore_Container_Text_W_Image_C* Feature0;
    class ULore_Container_Text_W_Image_C* Feature1;
    class UITM_Biome_ResourceIcon_C* ITM_Biome_ResourceIcon_2;
    class UITM_Biome_ResourceIcon_C* ITM_Biome_ResourceIcon1;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class URichTextBlock* RichTextBlock_BiomeDesc;
    class UTextBlock* TextBlock_Headline;
    class UBiome* Biome;
    bool IsHovering;
    class UAudioComponent* HoverSound;
    TArray<class UObject*> CaveObjects;
    TArray<class UMinersManualData*> BiomeFeatures;

    void Construct();
    void RefreshContent();
    void ExecuteUbergraph_LoreScreen_BiomeSpecific(int32 EntryPoint);
};

#endif
