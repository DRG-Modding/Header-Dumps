#ifndef UE4SS_SDK_Popup_MoreThanOneMainSave_HPP
#define UE4SS_SDK_Popup_MoreThanOneMainSave_HPP

class UPopup_MoreThanOneMainSave_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FlashingText;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBorder* Border_0;
    class UTextBlock* Header;
    class UITM_SaveSlot_Entry_C* ITM_SaveSlot_Entry;
    class UITM_SaveSlot_Entry_Header_C* ITM_SaveSlotsCategoryList_Entry;
    class UScrollBox* SaveSlotContainer;
    TArray<class UFSDSaveGame*> MainSaves;
    FPopup_MoreThanOneMainSave_COnOneMainSaveLeft OnOneMainSaveLeft;
    void OnOneMainSaveLeft();
    FString TmpSaveslot;

    void RemoveTempSave();
    void CreateTempSave();
    void TransformSavenameByBranch(FString InSaveName, FString& Savename);
    void CreateMainSaveslots();
    void Reset Color on Non Selected Save(class UFSDSaveGame* SaveSlot);
    void BindSaveslotEvents(class UITM_SaveSlot_Entry_C* SaveslotWidget);
    void SetColors();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void SaveDeleted(class UFSDSaveGame* save);
    void ExecuteUbergraph_Popup_MoreThanOneMainSave(int32 EntryPoint);
    void OnOneMainSaveLeft__DelegateSignature();
};

#endif
