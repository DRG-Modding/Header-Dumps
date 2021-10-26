// BlueprintGeneratedClass SpawnMenuSettingsSave.SpawnMenuSettingsSave_C
// Size: 0xb9 (Inherited: 0x28)
struct USpawnMenuSettingsSave_C : USaveGame {
	UPROPERTY(BlueprintReadWrite) TArray<FSpawnProfile> Spawn Profiles; 
	UPROPERTY(BlueprintReadWrite) int32_t Spawn Count; 
	UPROPERTY(BlueprintReadWrite) float Min Distance; 
	UPROPERTY(BlueprintReadWrite) float Max Distance; 
	UPROPERTY(BlueprintReadWrite) float Min Slope; 
	UPROPERTY(BlueprintReadWrite) float Max Slope; 
	UPROPERTY(BlueprintReadWrite) FVector Scale; 
	UPROPERTY(BlueprintReadWrite) FVector Local Offset; 
	UPROPERTY(BlueprintReadWrite) FRotator Local Rotation; 
	UPROPERTY(BlueprintReadWrite) float Initial Delay; 
	UPROPERTY(BlueprintReadWrite) float LifeTime; 
	UPROPERTY(BlueprintReadWrite) bool Spawn On Host; 
	UPROPERTY(BlueprintReadWrite) bool Spawn On Driller; 
	UPROPERTY(BlueprintReadWrite) bool Spawn On Engineer; 
	UPROPERTY(BlueprintReadWrite) bool Spawn On Gunner; 
	UPROPERTY(BlueprintReadWrite) bool Spawn On Scout; 
	UPROPERTY(BlueprintReadWrite) bool Spawn On Random Player; 
	UPROPERTY(BlueprintReadWrite) bool Spawn On All Players; 
	UPROPERTY(BlueprintReadWrite) bool Allow Destroy Natural Objects; 
	UPROPERTY(BlueprintReadWrite) bool Prevent Natural Creature Spawns; 
	UPROPERTY(BlueprintReadWrite) bool Interactivity Enabled; 
	UPROPERTY(BlueprintReadWrite) bool Allow Interactivity In Space Rig; 
	UPROPERTY(BlueprintReadWrite) bool Show Interactivity Notifications; 
	UPROPERTY(BlueprintReadWrite) float Queue Interval Rate; 
	UPROPERTY(BlueprintReadWrite) float Queue Initial Delay; 
	UPROPERTY(BlueprintReadWrite) int32_t Queue Pause Downed Players; 
	UPROPERTY(BlueprintReadWrite) bool LoadoutA; 
	UPROPERTY(BlueprintReadWrite) bool LoadoutB; 
	UPROPERTY(BlueprintReadWrite) bool LoadoutC; 
	UPROPERTY(BlueprintReadWrite) int32_t Max Active Critters; 
	UPROPERTY(BlueprintReadWrite) int32_t Max Active Swarmers; 
	UPROPERTY(BlueprintReadWrite) int32_t Max Active Enemies; 
	UPROPERTY(BlueprintReadWrite) bool Enable Natural Spawning; 
	UPROPERTY(BlueprintReadWrite) FString TwitchURL; 
	UPROPERTY(BlueprintReadWrite) bool Enable Chat Spawn Notifications; 
};

