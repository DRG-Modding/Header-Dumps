// BlueprintGeneratedClass Mod021.Mod021_C
// Size: 0x328 (Inherited: 0x2b0)
struct AMod021_C : AModBaseV2_C {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UTwitchManagerComponent_C* Twitch Manager; 
	UPROPERTY(BlueprintReadWrite) USpawnManagerComponent_C* Spawn Manager; 
	UPROPERTY(BlueprintReadWrite) FString Settings Save Location; 
	UPROPERTY(BlueprintReadWrite) USpawnMenuSettingsSave_C* Settings Save Class; 
	UPROPERTY(BlueprintReadWrite) USpawnMenuSettingsSave_C* Settings Save Game; 
	UPROPERTY(BlueprintReadWrite) UUI_SpawnMenu_C* Mod Menu; 
	UPROPERTY(BlueprintReadWrite) UHUD_ViewerInteractivity_C* Mod HUD; 
	UPROPERTY(BlueprintReadWrite) FString Twitch Notice; 
	UPROPERTY(BlueprintReadWrite) FLinearColor Default Nameplate Color; 
	UPROPERTY(BlueprintReadWrite) FLinearColor Dev Nameplate Color; 

	UFUNCTION(BlueprintCallable) void Apply Object Properties(AActor* Actor, float Mineral Chunk Value);
	UFUNCTION(BlueprintCallable) void Get Tag Value(TArray<FName> Tag, FString Name, FString return value);
	UFUNCTION(BlueprintCallable) void Send Chat Message(FString Sender, FString Text, enum class EChatSenderType SenderType);
	UFUNCTION(BlueprintCallable) void Apply Settings Changes();
	UFUNCTION(BlueprintCallable) void Register New Spawn(AActor* Actor);
	UFUNCTION(BlueprintCallable) void Add Nameplate To Actor(AActor* Actor, float Height, FString inString, FLinearColor Text Color, AActor* View Target, FString ViewerName);
	UFUNCTION(BlueprintCallable) void Stop Interactivity();
	UFUNCTION(BlueprintCallable) void Get Players From Options(bool Spawn On Host, bool Spawn On Random Player, bool Spawn On All Players, bool Spawn On Driller, bool Spawn On Engineer, bool Spawn On Gunner, bool Spawn On Scout, TArray<APawn*> Players);
	UFUNCTION(BlueprintCallable) void Parse Actor Tags(TArray<FName> Tags, float Nameplate Height, FString NameplateText, FLinearColor NameplateColor, FString Despawn Chain, FString Viewer Name, FString Viewer Message, float MineralChunkValue);
	UFUNCTION(BlueprintCallable) void Make Actor Tags(float Nameplate Height, FString NameplateText, FLinearColor NameplateColor, FString Despawn Chain, FString Viewer Name, FString Viewer Message, float MineralChunkValue, TArray<FName> Tags);
	UFUNCTION(BlueprintCallable) void Fix Projectile(AActor* Target);
	UFUNCTION(BlueprintCallable) void Calculate Sum(TArray<FSpawnProfile> Profiles, float Sum);
	UFUNCTION(BlueprintCallable) void Parse Nameplate Text(FString Nameplate Template, FString Nameplate Msg Template, FString Viewer Name, FString Viewer Message, FString Nameplate Text);
	UFUNCTION(BlueprintCallable) void Get Random Profile By Weight(TArray<FSpawnProfile> Profiles, FSpawnProfile Profile);
	UFUNCTION(BlueprintCallable) void Get Profiles By Name(FString Group Name, TArray<FSpawnProfile> Profiles);
	UFUNCTION(BlueprintCallable) void Activate Profiles by Name(FString Group Name, FString Viewer Name, FString Viewer Message, bool Show Notification, TArray<FVector> Despawn Targets);
	UFUNCTION(BlueprintCallable) void Destroy UI();
	UFUNCTION(BlueprintCallable) void Setup UI();
	UFUNCTION(BlueprintCallable) void Parse Notification Text(FString Original, FString Group Name, FString Viewer Name, FString return value);
	UFUNCTION(BlueprintCallable) void Try Start Interactivity();
	UFUNCTION(BlueprintCallable) void Save Settings();
	UFUNCTION(BlueprintCallable) void Load Settings();
	UFUNCTION(BlueprintCallable) void Settings Changed Event();
	UFUNCTION(BlueprintCallable) void Mod UI Opened Event();
	UFUNCTION(BlueprintCallable) void Interactivity State Changed Event(bool Is Interactivity Enabled);
	UFUNCTION(BlueprintCallable) void Interactivity Queue Interval Changed Event();
	UFUNCTION(BlueprintCallable) void Profile Spawned Event(FString Group Name);
	UFUNCTION(BlueprintCallable) void On Viewer Redeem Event(FString Profile, FString Viewer Name, FString Optional Message);
	UFUNCTION(BlueprintCallable) void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	UFUNCTION(BlueprintCallable) void BndEvt__Spawn Managerr_K2Node_ComponentBoundEvent_0_On Actor Spawned__DelegateSignature(AActor* Actor);
	UFUNCTION(BlueprintCallable) void Actor Destroyed Event(AActor* DestroyedActor);
	UFUNCTION(BlueprintCallable) void ReceiveBeginPlay();
	UFUNCTION(BlueprintCallable) void Proxy Child Actor Spawned Event(AActor* Actor);
	UFUNCTION(BlueprintCallable) void Spawn Registered Event(AActor* Actor);
	UFUNCTION(BlueprintCallable) void Kill All Enemies Event();
	UFUNCTION(BlueprintCallable) void Player Character Registered Event();
	UFUNCTION(BlueprintCallable) void Spawn Requested Event(FName Object ID);
	UFUNCTION(BlueprintCallable) void Cull Requested Event(FName Object ID);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_Mod021(int32_t EntryPoint);
};

