#ifndef UE4SS_SDK_Popup_ModdedSave_HPP
#define UE4SS_SDK_Popup_ModdedSave_HPP

class UPopup_ModdedSave_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBorder* Border_0;
    class UBasic_ButtonScalable_C* Button_Cancel;
    class UTextBlock* DATA_Content;
    class UTextBlock* Header;
    class UITM_CreateNewSaveSlot_Entry_C* ITM_CreateNewSaveSlot_Entry;
    class UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry;
    class UITM_SaveSlot_Entry_Header_C* ITM_SaveSlotsCategoryList_Entry;
    class UScrollBox* SaveSlotContainer;
    FPopup_ModdedSave_COnModdedSaveLoaded OnModdedSaveLoaded;
    void OnModdedSaveLoaded();
    bool CanCancel;
    FPopup_ModdedSave_COnModdedSaveCancelled OnModdedSaveCancelled;
    void OnModdedSaveCancelled();
    class UBasic_ToolTip_C* CancelTooltip;
    bool LoadVanillaSaves;

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    class UWidget* CancelButtonTooltip();
    void SetCanCancel(bool Can, FText OptionalTooltipText);
    void Reset Color on Non Selected Save(class UFSDSaveGame* SaveSlot);
    void BindSaveslotEvents(class UITM_SaveSlot_Entry_C* SaveslotWidget);
    void SetColors();
    void Set Create New Saveslot Entry();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void OnSaveDeleted();
    void OnSaveLoaded();
    void OnSaveCreated();
    void BndEvt__Button_Cancel_K2Node_ComponentBoundEvent_0_OnReleased__DelegateSignature();
    void Cancel();
    void ExecuteUbergraph_Popup_ModdedSave(int32 EntryPoint);
    void OnModdedSaveCancelled__DelegateSignature();
    void OnModdedSaveLoaded__DelegateSignature();
};

#endif
