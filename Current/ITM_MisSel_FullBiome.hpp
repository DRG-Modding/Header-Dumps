#ifndef UE4SS_SDK_ITM_MisSel_FullBiome_HPP
#define UE4SS_SDK_ITM_MisSel_FullBiome_HPP

class UITM_MisSel_FullBiome_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UOverlay* Overlay_0;
    class UUI_PlayerSpeaking_List_C* UI_PlayerSpeaking_List;
    class UBiome* Biome;
    class UITM_MisSel_BiomeBase_C* BiomeMapWidget;
    bool Is In Season Event Zone;

    void HighlightMissions(TArray<class UObject*>& AssetReferences, bool ShouldHighlight, class USeasonChallenge* Challenge);
    void UpdateMapPan(FVector2D InPosition);
    void GetRandomFreeMissionSlot(class UITM_MisSel_MissionMapIcon_C*& Output);
    void ClearMissions();
    void GetAllAllMissionSlots(TArray<class UITM_MisSel_MissionMapIcon_C*>& Items1);
    void Construct();
    void SetData(const TArray<class UGeneratedMission*>& missions, class UBiome* Biome);
    void ExecuteUbergraph_ITM_MisSel_FullBiome(int32 EntryPoint);
};

#endif
