#ifndef UE4SS_SDK_ITM_SaveSlot_Entry_HPP
#define UE4SS_SDK_ITM_SaveSlot_Entry_HPP

class UITM_SaveSlot_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_ButtonScalable_C* Button_Delete;
    class UBasic_ButtonScalable_C* Button_Load;
    class UITM_SaveSlot_Entry_ClassIcon_C* Driller;
    class UITM_SaveSlot_Entry_ClassIcon_C* Engineer;
    class UITM_SaveSlot_Entry_ClassIcon_C* Gunner;
    class UImage* Image_1;
    class UImage* IMG_MissionIcon;
    class UButton* MainButton;
    class UITM_SaveSlot_Entry_ClassIcon_C* Scout;
    class UTextBlock* Text_Rank;
    class UTextBlock* TXT_MainSave;
    class UTextBlock* TXT_Modded;
    class UTextBlock* TXT_SaveName;
    class UTextBlock* TXT_TimeStamp;
    class UBasic_ToolTip_C* MutatorToolTip;
    class UBasic_ToolTip_C* WarningToolTip;
    class UBiome_ToolTip_C* BiomeToolTip;
    FString saveSlotName;
    FString FullSaveSlotName;
    FITM_SaveSlot_Entry_COnSaveDeleted OnSaveDeleted;
    void OnSaveDeleted();
    FITM_SaveSlot_Entry_COnSaveConverted OnSaveConverted;
    void OnSaveConverted();
    class UFSDSaveGame* SaveInstance;
    FITM_SaveSlot_Entry_COnSaveDetails OnSaveDetails;
    void OnSaveDetails(class UFSDSaveGame* SaveSlot);
    FITM_SaveSlot_Entry_COnSaveLoaded OnSaveLoaded;
    void OnSaveLoaded();
    bool ActiveSave;
    class UBasic_ToolTip_C* LoadButtonTooltip;
    class UBasic_ToolTip_C* DeleteButtonTooltip;
    FITM_SaveSlot_Entry_COnSaveDeletedWithReference OnSaveDeletedWithReference;
    void OnSaveDeletedWithReference(class UFSDSaveGame* save);

    class UWidget* CreateDeleteButtonToolTip();
    class UWidget* CreateLoadButtonToolTip();
    void SetIfSaveIsActive(bool IsMainSlot);
    void SaveNameExists(FString Name, bool& Exists);
    void SetSelectedColor();
    void SetHeroRanks();
    void GetSaveSlotName(class UFSDSaveGame* SaveGame, bool ReturnEmptyOnNonUser, FString& OutSaveSlotName);
    void SetValues(class UFSDSaveGame* SaveGameInstance, bool MainSlot);
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void LoadAnswer(bool Yes);
    void BndEvt__Delete_Button_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature();
    void DeleteAnswer(bool Yes);
    void BndEvt__Button_Load_K2Node_ComponentBoundEvent_3_OnReleased__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_SaveSlot_Entry(int32 EntryPoint);
    void OnSaveDeletedWithReference__DelegateSignature(class UFSDSaveGame* save);
    void OnSaveLoaded__DelegateSignature();
    void OnSaveDetails__DelegateSignature(class UFSDSaveGame* SaveSlot);
    void OnSaveConverted__DelegateSignature();
    void OnSaveDeleted__DelegateSignature();
};

#endif
