#ifndef UE4SS_SDK_LoreScreen_Creatures_HPP
#define UE4SS_SDK_LoreScreen_Creatures_HPP

class ULoreScreen_Creatures_C : public ULoreScreen_Master_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* CreatureFadeOut;
    class UBasic_ScrollBarBox_C* Basic_ScrollBarBox_116;
    class UImage* CreatureImage;
    class UHorizontalBox* HorizontalBox_KillCount;
    class UImage* Image_crosshair01;
    class UImage* Image_crosshair2;
    class UITM_DragRotateCharacterShowroom_C* ITM_DragRotateCharacterShowroom;
    class ULore_Container_CombatTip_C* Lore_Container_CombatTip;
    class ULore_Container_CombatTip_C* Lore_Container_CombatTip_160;
    class ULore_Container_CreatureInfo_C* Lore_Content_Container_CreatureInfo;
    class ULore_Content_Statistics_C* Lore_Content_Statistics;
    class ULoreScreen_Template_C* LoreScreen_Template;
    class URichTextSizable* RichTextSizable_Description;
    class USizeBox* SizeBox_Description;
    class UTextBlock* TextBlock_Kills;
    class UVerticalBox* VerticalBox_Hints;
    class UEnemyMinersManualData* enemy;
    bool IsHovering;
    class UAudioComponent* HoverSound;
    class UMaterialInstanceDynamic* CreatureDynMat;
    bool IsRotatingLeft;
    class UEnemyID* TwinID;

    void Construct();
    void RefreshContent();
    void RefreshCreature();
    void FadeOutFinished();
    void ShowCreature();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_LoreScreen_Creatures(int32 EntryPoint);
};

#endif
