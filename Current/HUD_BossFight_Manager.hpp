#ifndef UE4SS_SDK_HUD_BossFight_Manager_HPP
#define UE4SS_SDK_HUD_BossFight_Manager_HPP

class UHUD_BossFight_Manager_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USizeBox* BarSize;
    class UHorizontalBox* EntryBox;
    float MinDesiredWidth;
    TSubclassOf<class UHUD_BossFight_BaseEntry_C> DefaultClassReference;
    int32 PreviewEntries;
    bool IsPreviewing;

    void RemoveCustomWidget(class UUserWidget* InWidget);
    void AddCustomWidget(class UUserWidget* InWidget);
    void AddBossFight(const TScriptInterface<class IBossFightInterface>& BossFight);
    void OnLoaded_7CEF0B6F41A50A9529F16780A3E45EE9(UClass* Loaded);
    void Construct();
    void OnNewBossFight(const TScriptInterface<class IBossFightInterface>& BossFight);
    void PreConstruct(bool IsDesignTime);
    void Setup BossFights();
    void Setup Custom Widgets();
    void ExecuteUbergraph_HUD_BossFight_Manager(int32 EntryPoint);
};

#endif
