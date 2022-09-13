#ifndef UE4SS_SDK_ITM_RestoreSaveList_Entry_HPP
#define UE4SS_SDK_ITM_RestoreSaveList_Entry_HPP

class UITM_RestoreSaveList_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UButton* Button_0;
    class UImage* Image_0;
    class UImage* Image_1;
    class UImage* Image_2;
    class UImage* IMG_MissionIcon;
    class UTextBlock* Text_Credits;
    class UTextBlock* Text_Rank;
    class UTextBlock* Text_Star;
    class UTextBlock* TXT_Modded;
    class UTextBlock* TXT_SaveName;
    class UTextBlock* TXT_TimeStamp;
    FBlueprintSessionResult Session;
    class UBasic_ToolTip_C* MutatorToolTip;
    class UBasic_ToolTip_C* WarningToolTip;
    class UBiome_ToolTip_C* BiomeToolTip;
    class UFSDSaveGame* SaveGame;
    int32 CurrentIndex;
    FString CurrentName;
    class UBasic_ToolTip_C* ToolTip;
    FText TextForTooltip;

    class UWidget* CreateToolTipWidget();
    void SetValues(int32 PlayerRank, int32 Credits, int32 PromotionRank, FString slotName, bool CurrentSave, class UFSDSaveGame* SaveGameInstance);
    void OnFailure_01B969514F5C76910A60AC87B4757BE7();
    void OnSuccess_01B969514F5C76910A60AC87B4757BE7();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void Answer(bool Yes);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_RestoreSaveList_Entry(int32 EntryPoint);
};

#endif
