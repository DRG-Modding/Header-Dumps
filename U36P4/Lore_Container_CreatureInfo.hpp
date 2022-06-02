#ifndef UE4SS_SDK_Lore_Container_CreatureInfo_HPP
#define UE4SS_SDK_Lore_Container_CreatureInfo_HPP

class ULore_Container_CreatureInfo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_BG_CutCorner_C* Basic_BG_CutCorner_C;
    class UBasic_BG_CutCorner_C* Basic_BG_CutCorner_C_0;
    class UBasic_BG_CutCorner_C* Basic_BG_Window_C_0;
    class UBasic_Window_CutCorner_C* Basic_Window;
    class UHorizontalBox* HBox_Armor;
    class UHorizontalBox* HBox_Attack;
    class UHorizontalBox* HBox_Attack_Enemy2;
    class UHorizontalBox* HBox_Family;
    class UHorizontalBox* HBox_Special;
    class UHorizontalBox* HBox_Type;
    class UHorizontalBox* HBox_Weakpoint;
    class ULore_InfoBox_C* InfoBox_Armor;
    class ULore_InfoBox_C* InfoBox_Family;
    class ULore_InfoBox_C* InfoBox_Type;
    class ULore_InfoBox_C* InfoBox_Weakpoints;
    class USizeBox* SizeBox_3;
    class UTextBlock* Text_Attack;
    class UTextBlock* Text_Attack_enemy2;
    class UTextBlock* TextBlock_0;
    class UTextBlock* TextBlock_2;
    class UTextBlock* TextBlock_3;
    class UTextBlock* TextBlock_4;
    class UTextBlock* TextBlock_Header;
    class UWrapBox* WrapBox_Attacks;
    class UWrapBox* WrapBox_Attacks_Enemy2;
    class UWrapBox* WrapBox_SpecialAttacks;
    FText TempText;
    class UMinersManual* MinersManual;
    class UEnemyID* TwinID;
    float BoxPadding;

    void TwinsCustomAttack(class UEnemyMinersManualData* enemy);
    void GetTypeText(EEnemyType InType, FText& DisplayText, class UTexture2D*& Icon);
    void SetData(class UEnemyMinersManualData* Creature, class UMinersManual* MinersManual);
    void FillInAttacks(class UWrapBox* Container, const TArray<FEnemyAttackDescription>& Attacks);
    void ExecuteUbergraph_Lore_Container_CreatureInfo(int32 EntryPoint);
};

#endif
